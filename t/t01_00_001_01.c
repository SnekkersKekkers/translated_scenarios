BGOpen("sc121",0);
ScrFadeIn(0);
SEPlay("EV_SE_597",0.5,0.2);
Wait(50,0);
SEPlay("EV_SE_795",0.2,0.2);
MsgDisp("主人公","∋");
MsgDisp("主人公","(A bell rang just now?
Maybe......)");
MsgDisp("主人公","Yes, let's go.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
SEStop("EV_SE_795",2);
MsgClose();
ScrFadeOut(0);
Wait(80,0);
EnvAutoSet(0);
SEStop("EV_SE_FOOT_WALK_AWAY_ALONE",0.1);
BGOpen("ex170",0);
EnvPlay("SE_ENV_BG_EV019_CO0",1);
ScrFadeIn(0);
MsgDisp("主人公","It's nostalgic......");
MsgDisp("主人公","(I feel like even when I was little, I ran
down this road; beckoned by the sound of
the bell.)");
