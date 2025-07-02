MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Aah, I failed.
I fell down...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,2,-1,-1,0,0,0,60);
ChMotion(4,1,1);
VoicePlay("P740400003_04_000");
MsgDisp("Nanatsumori","Oi, were you injured?");
MsgDisp("主人公","｛七ツ森＊｝...
I'm fine, but I... ");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P740400003_04_010");
MsgDisp("Nanatsumori","Hn.
It's not like you wear a dress everyday, 
so these happenings are unavoidable.");
MsgDisp("主人公","But...");
ChMotion(4,1,1);
VoicePlay("P740400003_04_020");
MsgDisp("Nanatsumori","No need to be so down in the dumps.
Good work on this stage.");
MsgDisp("主人公","(I couldn't show ｛七ツ森＊｝ a good show
...I'm really disappointed.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
