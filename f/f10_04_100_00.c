BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(There's only one more subject 
left for today's lessons...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C04_NANA_A");
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
VoicePlay("F100410000_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Ah,｛七ツ森＊｝.
Afre you moving classrooms 
for next class?");
ChMotion(4,1,1);
VoicePlay("F100410000_04_010");
MsgDisp("Nanatsumori","Yeah.
See ya then.");
MsgClose();
BGMVol(0.5,2);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
Wait(20,1);
SEPlay("EV_SE_642",0,0.6);
MsgDisp("","(*Plop*)");
MsgDisp("主人公","Hm?
his commuter pass...");
MsgDisp("主人公","｛七ツ森＊｝!
Did you drop this just now!");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE",0,0.8);
SEWait();
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,2,3,-1,-1,0,0,0,60);
VoicePlay("F100410000_04_020");
MsgDisp("Nanatsumori","Huh, I really did.
Thank you.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(4,0,30);
MsgClose();
VoicePlay("F100410000_04_030");
MsgDisp("Nanatsumori","I did it again...
that's no good.");
MsgDisp("主人公","(I'm glad. But he 
said \"Again\"...)");
MsgClose();
ScrFadeOut(0,0);
