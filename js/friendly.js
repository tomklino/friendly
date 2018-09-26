function sumDevidors(victim) {
	let sum = 1;
	let i;
	for(i = 2; i*i < victim; i++) {
		if (victim % i === 0) {
			sum = sum + i + (victim / i);
		}
	}
	if (i*i === victim) return sum + i;
	return sum;
}

let top = process.argv[2]

for (let candidate = 1; candidate < top; candidate++) {
	let mate = sumDevidors(candidate)
	if(mate <= candidate) continue;
	if(candidate === sumDevidors(mate)) {
		console.log(candidate, mate);
	}
}
