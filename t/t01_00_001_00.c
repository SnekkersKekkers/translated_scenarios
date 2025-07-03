BGOpen("sc121",0);
ScrFadeIn(0);
MsgDisp("主人公","(｛風真＊＊｝,
you said you'd come back
before our graduation......)");
MsgDisp("主人公","(——Ah, Maybe he's over there...?)");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
Wait(40);
BGOpen("sc010",1);
ScrFadeIn(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgDisp("主人公","(......I wish he contacted me
but I wonder
if something happened......?)");
SEPlay("EV_SE_597",0.5,0.2);
Wait(70,0);
SEPlay("EV_SE_795",0.2,0.25);
Wait(100,0);
MsgDisp("主人公","(......Eh∋　Now......)");
Wait(100,0);
SEStop("EV_SE_795",2.8);
MsgDisp("主人公","(Church bells......)");
VoicePlay("T010000100_01_000");
MsgDisp("Ryota","Ah, hey the bell! 
I heard it again!");
MsgDisp("主人公","(Ehh∈
｛風真＊＊｝?)");
VoicePlay("T010000100_01_010");
MsgDisp("Ryota","Over here! I think I 
heard it over here!
Come!");
SEPlay("EV_SE_FOOT_008",0,0.1);
Wait(5,0);
SEPlay("EV_SE_688",0,0.1);
Wait(100,0);
MsgDisp("主人公","Ah, wait up, ｛風真＊＊｝!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev018",0);
ScrFadeIn(0);
VoicePlay("T010000100_01_020");
MsgDisp("Ryota","This is an old church,
it's not in use 
anymore. ");
BGMStop(3)MsgClose();
ScrFadeOut(0,1);
Wait(100,0);
EnvAutoSet(0);
BGOpen("ev015",0);
EnvPlay("SE_ENV_BG_EV019_CO0",1);
ScrFadeIn(0);
Wait(100,0);
SEPlay("EV_SE_CHURCH_003");
BGOpen("ev016",0);
Wait(30,0);
SEPlay("EV_SE_CHURCH_001");
BGOpen("ev017",0);
Wait(100,0);
ScrFadeOut(0,1,120);
Wait(100,0);
EnvAutoSet(1);
