.PHONY: clean All

All:
	@echo "----------Building project:[ calculator - Debug ]----------"
	@cd "calculator/calculator" && "$(MAKE)" -f  "calculator.mk"
clean:
	@echo "----------Cleaning project:[ calculator - Debug ]----------"
	@cd "calculator/calculator" && "$(MAKE)" -f  "calculator.mk" clean
