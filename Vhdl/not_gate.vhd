library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity not_gate is
    Port ( i_in : in STD_LOGIC;
           o_out : out STD_LOGIC);
end not_gate;

architecture Behavioral of not_gate is

begin

    o_out <= not i_in;

end Behavioral;