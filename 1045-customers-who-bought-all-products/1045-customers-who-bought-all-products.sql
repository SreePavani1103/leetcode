/* Write your PL/SQL query statement below */
select customer_id from Customer c 
join
product p on c.product_key=p.product_key 
group by c.customer_id  
having count(  distinct c.product_key)=(select  count(*) from Product );