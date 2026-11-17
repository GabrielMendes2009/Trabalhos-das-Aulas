from flask import Flask, render_template

app = Flask(__name__)


@app.route('/')
def index(): # put application's code here
    conteudo = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ab aliquid assumenda at cumque doloribus ullam, natus neque nesciunt optio quas quidem quisquam."
    return render_template('index.html', 
                           titulo="Home Page", 
                           header_title="A minha 1ª pagina Flask - backend", 
                           conteudo=conteudo)


@app.route('/infos')
def pag2(): # put application's code here
    return render_template('pag2.html')


if __name__ == '__main__':
    app.run()


