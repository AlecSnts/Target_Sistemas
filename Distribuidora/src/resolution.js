import dados from './dados.json';

function Resolution(){

    const filtrar_dias = ()=>{
        const dias_uteis = dados.filter((item)=>{if(item.valor > 0){return item}});
        return dias_uteis
    }

    const menor_faturamento = (filtrado)=>{
        var menor = {
            dia: filtrado[0].dia,
            valor: filtrado[0].valor
        };

        for(var day of filtrado){
            if(day.valor < menor.valor){
                menor = day;
            }
        }

        return menor;
    }

    const maior_faturamento = (filtrado)=>{
        var maior = {
            dia: filtrado[0].dia,
            valor: filtrado[0].valor
        };

        for(var day of filtrado){
            if(day.valor > maior.valor){
                maior = day;
            }
        }

        return maior;
    }

    const acima_da_media = (filtrado)=>{
        var total = 0;
        var tamanho = 0;
        var acima = 0;

        for(var day of filtrado){
            total = total + day.valor;
            tamanho++;
        }

        var media = total/tamanho;

        for(var day of filtrado){
            if(day.valor > media){ acima++; }
        }

        return acima;
    }

    const filtrado = filtrar_dias();
    const menor = menor_faturamento(filtrado);
    const maior = maior_faturamento(filtrado);
    const dias_produtivos = acima_da_media(filtrado);

    return(
        <div>
            <p>Dia com menor faturamento: Dia {menor.dia} com R$ {menor.valor}</p>
            <p>Dia com maior faturamento: Dia {maior.dia} com R$ {maior.valor}</p>
            <p>Quantidade de dias com faturamento acima da média: {dias_produtivos}</p>
        </div>
    );
}

export default Resolution;