#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QDebug>

class Calculator : public QWidget {
    Q_OBJECT

public:
    Calculator() {
        setWindowTitle("Qt Calculator");
        setFixedSize(300, 400); // Set window size

        // Create layout
        QVBoxLayout *mainLayout = new QVBoxLayout(this);

        // Create display
        display = new QLineEdit();
        display->setReadOnly(true);
        display->setAlignment(Qt::AlignRight);
        display->setStyleSheet("font-size: 24px; padding: 10px;");
        mainLayout->addWidget(display);

        // Create button grid
        QGridLayout *grid = new QGridLayout();
        QString buttons[4][4] = {
            {"7", "8", "9", "/"},
            {"4", "5", "6", "*"},
            {"1", "2", "3", "-"},
            {"C", "0", "=", "+"}
        };

        // Create buttons
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                QPushButton *btn = new QPushButton(buttons[i][j]);
                btn->setStyleSheet("font-size: 18px; padding: 15px;");
                grid->addWidget(btn, i, j);
                connect(btn, &QPushButton::clicked, this, [this, btn]() { onButtonClicked(btn->text()); });
            }
        }

        mainLayout->addLayout(grid);
        setLayout(mainLayout);
    }

private slots:
    void onButtonClicked(const QString &text) {
        if (text == "C") {
            display->clear();
        } else if (text == "=") {
            calculate();
        } else {
            display->setText(display->text() + text);
        }
    }

    void calculate() {
        QString expr = display->text();
        if (expr.isEmpty()) return;

        QScriptEngine engine;
        QScriptValue result = engine.evaluate(expr);

        if (result.isError()) {
            display->setText("Error");
        } else {
            display->setText(result.toString());
        }
    }

private:
    QLineEdit *display;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Calculator calc;
    calc.show();
    return app.exec();
}
