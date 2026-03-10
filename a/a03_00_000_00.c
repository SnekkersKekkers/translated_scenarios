EnvAutoSet(0);
BGOpen("sc401",0);
EnvPlay("SE_ENV_BG_SC401_CO0",1,0.5);
SEPlay("EV_SE_CLAP_002",0,0.9);
SEPlay("EV_SE_CLAP_004",0.3,0.4);
SEPlay("EV_SE_GAYA_021",0,0.3);
ScrFadeIn(0);
Wait(60,0);
SEStop("EV_SE_CLAP_002",4);
SEStop("EV_SE_CLAP_004",4);
SEStop("EV_SE_GAYA_021",4);
VoicePlay("A030000000_49_000");
MsgDisp("Host","Thank you, principal.
Next up is the vice principal.
Please give him a warm welcome.");
BGOpen("sc400",0);
VoicePlay("A030000000_32_000");
MsgDisp("VP Himuro","I'm Vice Principal Himuro. With the
principal's admission speech, you are
now students of \"Habataki High School.\"");
VoicePlay("A030000000_32_010");
MsgDisp("VP Himuro","Work hard with the peers fate brought
you here with, lift each other up, and
spend three years forging wings to soar.");
VoicePlay("A030000000_32_020");
MsgDisp("VP Himuro","We the teachers and staff are proud to
guide you, and we intend to give our
very best——");
MsgDisp("主人公","(Vice Principal Himuro...
He seems like a strict but very reliable
teacher.)");
SEPlay("EV_SE_CLAP_002",0,0.9);
SEPlay("EV_SE_CLAP_004",0.2,0.4);
SEPlay("EV_SE_GAYA_021",0,0.4);
BGOpen("sc401",0);
Wait(60,0);
VoicePlay("A030000000_49_010");
MsgDisp("Host","Thank you, vice principal.
Moving on, the board chairman of the
school will now say his greetings.");
BGMStop(2);
SEStop("EV_SE_CLAP_002",2.2);
SEStop("EV_SE_CLAP_004",2.2);
SEStop("EV_SE_GAYA_021",2.2);
MsgClose();
ScrFadeOut(0);
Wait(80,0);
SEWait();
EnvAutoSet(1);
