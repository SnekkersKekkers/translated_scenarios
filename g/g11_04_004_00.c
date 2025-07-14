BGOpen("sc000",1);
ScrFadeIn(0);
MsgDisp("主人公","(I feel like stopping by Cafe Alucard for
a bit...)");
MsgDisp("主人公","Alright, let's go!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","...Huh?");
VoicePlay("G110400400_04_000");
MsgDisp("Nanatsumori?","...Hm?");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛七ツ森＊｝.");
VoicePlay("G110400400_04_010");
MsgDisp("Nanatsumori","Yo.
What's up?");
MsgDisp("主人公","I just felt like coming here.
｛七ツ森＊｝, are you working?");
ChMotion(4,2);
VoicePlay("G110400400_04_020");
MsgDisp("Nanatsumori","Yeah.
For people like you.");
MsgDisp("主人公","?");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("G110400400_04_030");
MsgDisp("Nanatsumori","You've got to keep the fashionista's
informed.");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,1);
VoicePlay("G110400400_04_040");
MsgDisp("Nanatsumori","Just like you did the other day.
Give a shot for people who want new items
and keep up with the trends.");
MsgDisp("主人公","I see,
Wow, I'm looking forward to it.");
ChMotion(4,2);
VoicePlay("G110400400_04_050");
MsgDisp("Nanatsumori","I'm looking forward to it too.
Maybe you'll decide to have a date with me
next time too.");
MsgDisp("主人公","(A date... I see! ｛七ツ森＊｝ really
is paying close attention after all.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
