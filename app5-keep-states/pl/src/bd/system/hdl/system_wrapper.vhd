--Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2017.4 (lin64) Build 2086221 Fri Dec 15 20:54:30 MST 2017
--Date        : Mon Oct 25 15:19:56 2021
--Host        : tomal running 64-bit Ubuntu 20.04.3 LTS
--Command     : generate_target system_wrapper.bd
--Design      : system_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity system_wrapper is
  port (
    DDR_addr : inout STD_LOGIC_VECTOR ( 14 downto 0 );
    DDR_ba : inout STD_LOGIC_VECTOR ( 2 downto 0 );
    DDR_cas_n : inout STD_LOGIC;
    DDR_ck_n : inout STD_LOGIC;
    DDR_ck_p : inout STD_LOGIC;
    DDR_cke : inout STD_LOGIC;
    DDR_cs_n : inout STD_LOGIC;
    DDR_dm : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_dq : inout STD_LOGIC_VECTOR ( 31 downto 0 );
    DDR_dqs_n : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_dqs_p : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_odt : inout STD_LOGIC;
    DDR_ras_n : inout STD_LOGIC;
    DDR_reset_n : inout STD_LOGIC;
    DDR_we_n : inout STD_LOGIC;
    FIXED_IO_ddr_vrn : inout STD_LOGIC;
    FIXED_IO_ddr_vrp : inout STD_LOGIC;
    FIXED_IO_mio : inout STD_LOGIC_VECTOR ( 53 downto 0 );
    FIXED_IO_ps_clk : inout STD_LOGIC;
    FIXED_IO_ps_porb : inout STD_LOGIC;
    FIXED_IO_ps_srstb : inout STD_LOGIC;
    vaux0_v_n : in STD_LOGIC;
    vaux0_v_p : in STD_LOGIC;
    vaux12_v_n : in STD_LOGIC;
    vaux12_v_p : in STD_LOGIC;
    vaux13_v_n : in STD_LOGIC;
    vaux13_v_p : in STD_LOGIC;
    vaux15_v_n : in STD_LOGIC;
    vaux15_v_p : in STD_LOGIC;
    vaux1_v_n : in STD_LOGIC;
    vaux1_v_p : in STD_LOGIC;
    vaux5_v_n : in STD_LOGIC;
    vaux5_v_p : in STD_LOGIC;
    vaux6_v_n : in STD_LOGIC;
    vaux6_v_p : in STD_LOGIC;
    vaux8_v_n : in STD_LOGIC;
    vaux8_v_p : in STD_LOGIC;
    vaux9_v_n : in STD_LOGIC;
    vaux9_v_p : in STD_LOGIC;
    vp_vn_v_n : in STD_LOGIC;
    vp_vn_v_p : in STD_LOGIC
  );
end system_wrapper;

architecture STRUCTURE of system_wrapper is
  component system is
  port (
    DDR_cas_n : inout STD_LOGIC;
    DDR_cke : inout STD_LOGIC;
    DDR_ck_n : inout STD_LOGIC;
    DDR_ck_p : inout STD_LOGIC;
    DDR_cs_n : inout STD_LOGIC;
    DDR_reset_n : inout STD_LOGIC;
    DDR_odt : inout STD_LOGIC;
    DDR_ras_n : inout STD_LOGIC;
    DDR_we_n : inout STD_LOGIC;
    DDR_ba : inout STD_LOGIC_VECTOR ( 2 downto 0 );
    DDR_addr : inout STD_LOGIC_VECTOR ( 14 downto 0 );
    DDR_dm : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_dq : inout STD_LOGIC_VECTOR ( 31 downto 0 );
    DDR_dqs_n : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    DDR_dqs_p : inout STD_LOGIC_VECTOR ( 3 downto 0 );
    FIXED_IO_mio : inout STD_LOGIC_VECTOR ( 53 downto 0 );
    FIXED_IO_ddr_vrn : inout STD_LOGIC;
    FIXED_IO_ddr_vrp : inout STD_LOGIC;
    FIXED_IO_ps_srstb : inout STD_LOGIC;
    FIXED_IO_ps_clk : inout STD_LOGIC;
    FIXED_IO_ps_porb : inout STD_LOGIC;
    vaux0_v_n : in STD_LOGIC;
    vaux0_v_p : in STD_LOGIC;
    vaux1_v_n : in STD_LOGIC;
    vaux1_v_p : in STD_LOGIC;
    vaux5_v_n : in STD_LOGIC;
    vaux5_v_p : in STD_LOGIC;
    vaux6_v_n : in STD_LOGIC;
    vaux6_v_p : in STD_LOGIC;
    vaux8_v_n : in STD_LOGIC;
    vaux8_v_p : in STD_LOGIC;
    vaux9_v_n : in STD_LOGIC;
    vaux9_v_p : in STD_LOGIC;
    vaux12_v_n : in STD_LOGIC;
    vaux12_v_p : in STD_LOGIC;
    vaux13_v_n : in STD_LOGIC;
    vaux13_v_p : in STD_LOGIC;
    vaux15_v_n : in STD_LOGIC;
    vaux15_v_p : in STD_LOGIC;
    vp_vn_v_n : in STD_LOGIC;
    vp_vn_v_p : in STD_LOGIC
  );
  end component system;
begin
system_i: component system
     port map (
      DDR_addr(14 downto 0) => DDR_addr(14 downto 0),
      DDR_ba(2 downto 0) => DDR_ba(2 downto 0),
      DDR_cas_n => DDR_cas_n,
      DDR_ck_n => DDR_ck_n,
      DDR_ck_p => DDR_ck_p,
      DDR_cke => DDR_cke,
      DDR_cs_n => DDR_cs_n,
      DDR_dm(3 downto 0) => DDR_dm(3 downto 0),
      DDR_dq(31 downto 0) => DDR_dq(31 downto 0),
      DDR_dqs_n(3 downto 0) => DDR_dqs_n(3 downto 0),
      DDR_dqs_p(3 downto 0) => DDR_dqs_p(3 downto 0),
      DDR_odt => DDR_odt,
      DDR_ras_n => DDR_ras_n,
      DDR_reset_n => DDR_reset_n,
      DDR_we_n => DDR_we_n,
      FIXED_IO_ddr_vrn => FIXED_IO_ddr_vrn,
      FIXED_IO_ddr_vrp => FIXED_IO_ddr_vrp,
      FIXED_IO_mio(53 downto 0) => FIXED_IO_mio(53 downto 0),
      FIXED_IO_ps_clk => FIXED_IO_ps_clk,
      FIXED_IO_ps_porb => FIXED_IO_ps_porb,
      FIXED_IO_ps_srstb => FIXED_IO_ps_srstb,
      vaux0_v_n => vaux0_v_n,
      vaux0_v_p => vaux0_v_p,
      vaux12_v_n => vaux12_v_n,
      vaux12_v_p => vaux12_v_p,
      vaux13_v_n => vaux13_v_n,
      vaux13_v_p => vaux13_v_p,
      vaux15_v_n => vaux15_v_n,
      vaux15_v_p => vaux15_v_p,
      vaux1_v_n => vaux1_v_n,
      vaux1_v_p => vaux1_v_p,
      vaux5_v_n => vaux5_v_n,
      vaux5_v_p => vaux5_v_p,
      vaux6_v_n => vaux6_v_n,
      vaux6_v_p => vaux6_v_p,
      vaux8_v_n => vaux8_v_n,
      vaux8_v_p => vaux8_v_p,
      vaux9_v_n => vaux9_v_n,
      vaux9_v_p => vaux9_v_p,
      vp_vn_v_n => vp_vn_v_n,
      vp_vn_v_p => vp_vn_v_p
    );
end STRUCTURE;
