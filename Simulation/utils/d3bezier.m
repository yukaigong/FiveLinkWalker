function fcn = d3bezier(coeff,s)

	dcoeff = diff_coeff(coeff);
	d2coeff = diff_coeff(dcoeff); 
	d3coeff = diff_coeff(d2coeff); 
	fcn = bezier(d3coeff,s);
