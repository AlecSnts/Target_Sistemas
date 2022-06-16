import logo from './logo.svg';
import Resolution from './resolution.js';
import './App.css';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <h1>DISTRIBUIDORA</h1>
        <img src={logo} className="App-logo" alt="logo" />
        <p>Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne</p>
        <ul>
          <li>O menor valor de faturamento ocorrido em um dia do mês</li>
          <li>O maior valor de faturamento ocorrido em um dia do mês</li>
          <li>Número de dias no mês em que o valor de faturamento diário foi superior à média mensal</li>
        </ul>
        <Resolution></Resolution>
      </header>
    </div>
  );
}

export default App;
