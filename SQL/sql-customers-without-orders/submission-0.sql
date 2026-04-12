SELECT name 
FROM customers as a
WHERE id NOT IN (SELECT customer_id FROM orders);