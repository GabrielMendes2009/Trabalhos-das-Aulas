from flask import Flask, render_template, request

app = Flask(__name__)

class Cliente:
    def __init__(self, id: int, nome: str, idade: int):
        self.id = id
        self.nome = nome
        self.idade = idade

lista_clientes = [
    Cliente(1, "Galabriel", 25),
    Cliente(2, "Ana", 30),
    Cliente(3, "Carlos", 22),
    Cliente(4, "Beatriz", 28)
]

@app.route('/')
def index():
    conteudo = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ab aliquid assumenda at cumque doloribus ullam, natus neque nesciunt optio quas quidem quisquam."
    
    ctx = {
        "titulo": "Home Page",
        "header_title": "A minha 1ª página Flask - backed",
        "conteudo": conteudo,
        "showimg": True
    }
    
    return render_template('index.html', **ctx)


@app.get('/infos')
def pag2():
    conteudo = """Vestibulum imperdiet augue quis augue luctus pulvinar. Praesent scelerisque augue necorci lacinia sagittis. Suspendisse sollicitudin lacinia facilisis. In ornare consequat mollis. Donec sagittis felis et neque porttitor malesuada a ullamcorper eros. Curabitur quis nulla vel risus malesuada sagittis. Orci varius natoque penatibus et magnis disparturient montes, nascetur ridiculus mus. Curabitur eleifend non leo eu iaculis. Cras et orci elit. In eu est purus."""

    ctx = {
        "titulo": "Informações",
        "header_title": "Informações",
        "conteudo": conteudo,
        "showimg": True
    }

    return render_template('index.html', **ctx)

@app.get('/pag3')
def pag3():
    nomes = ["Ana", "Maria", "Rita", "Joana"]
    return render_template("pag3.html", nomes=nomes)


@app.route('/pag4/<int:id_pag4>')
def pag4(id_pag4: int):
    nomes = [id_pag4]
    return render_template("pag3.html", nomes=nomes)


@app.route('/pag5')
def pag5():
    nome = request.args.get('nome', "Sem nome")
    idade = request.args.get('idade', "Sem idade")

    nomes = [nome, idade]
    return render_template("pag3.html", nomes=nomes)

@app.get('/Clientes')
def listar_clientes():
    return render_template('clientes.html',
        titulo="Clientes", 
        header_title="Lista de Clientes",
        clientes=lista_clientes 
    )


@app.get('/Clientes/<int:id_cliente>')
def detalhe_cliente(id_cliente: int):
    print(id_cliente)
    
    cliente_encontrado = None
    for c in lista_clientes:
        if c.id == id_cliente:
            cliente_encontrado = c
            break

    if not cliente_encontrado:
        return f"Cliente {id_cliente} não encontrado.", 404

    return render_template('clientes.html', 
        titulo=f"Cliente {cliente_encontrado.nome}", 
        header_title=f"Cliente: {cliente_encontrado.nome}",
        conteudo=f"Detalhes do cliente ID: {cliente_encontrado.id} | Nome: {cliente_encontrado.nome} | Idade: {cliente_encontrado.idade}"
    )


if __name__ == '__main__':
    app.run()