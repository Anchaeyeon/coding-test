select ANIMAL_ID, NAME
from ANIMAL_INS
where INTAKE_CONDITION like 'Sick'
order by ANIMAL_ID asc;