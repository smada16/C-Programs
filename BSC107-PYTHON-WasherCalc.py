import math

# Ask user for inputs
density = float(input("Enter density: "))
thickness = float(input("Enter the thickness: "))
quantity = int(input("Enter the qty: "))
rad_inner = float(input("Enter the inner radius: "))
rad_outer = float(input("Enter the outter radius: "))

# Define function to calculate washer area
def calculateArea(inside_radius, outside_radius):
  inside_area = (inside_radius * inside_radius) * math.pi
  outside_area = (outside_radius * outside_radius) * math.pi
  return outside_area - inside_area

# Calculate total weight of the washers
total_weight = calculateArea(rad_inner, rad_outer) * density * thickness * quantity

# Print results to user 
print(f"Total weight of washers is {total_weight}.")


