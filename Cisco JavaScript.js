/* Let's play florist. Declare six variables, remembering to name them according to their purpose:
the price of a single rose (8) and the number of roses you have (70)
the price of a single lily (10) and the number of lilies you have (50)
the price of a single tulip (2) and the number of tulips you have (120)
Now declare three variables, one each for the roses, lilies, and tulips you have, in which you place their total price. 
Insert the corresponding values into the variables using the variables declared in the previous step. 
Finally, declare a variable in which you store the price of all your flowers (again, use the previous variables for initialization).*/

let rosePrice = 8;
let lilyPrice = 10;
let tulipPrice = 2;

let noRose = 70;
let noLily = 50;
let noTulip = 120;

let totalRose = rosePrice * noRose;
let totalLily = lilyPrice * noLily;
let totalTulip = tulipPrice * noTulip;

console.log("Total Price rose =",totalRose );
console.log("Total Price lilies =",totalLily );
console.log("Total Price tulips =",totalTulip );
