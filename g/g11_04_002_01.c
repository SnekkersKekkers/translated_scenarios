BGOpen("sc500",1);
ScrFadeIn(0);
MsgDisp("主人公","(Oh yeah.
Should I check out the new items in this
month's Habatcher feature?)");
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
MsgDisp("主人公","Sigh...");
VoicePlay("G110400201_34_000");
MsgDisp("Clerk","Welcome.
Are you here alone?");
MsgDisp("主人公","Ah, yeah...");
VoiceEVSPlay(4);
VoicePlay("G110400201_04_000");
MsgDisp("Nanatsumori?","｛主人公｝.");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("G110400201_04_010");
MsgDisp("Nanatsumori","Can I guess what happened?");
MsgDisp("主人公","Huh?");
VoicePlay("G110400201_04_020");
MsgDisp("Nanatsumori","Why you came here I mean.");
ChMotion(4,2);
VoicePlay("G110400201_04_030");
MsgDisp("Nanatsumori","I think it's this.
Look at the new items in this month's
Habatcher magazine.");
VoicePlay("G110400201_04_040");
MsgDisp("Nanatsumori","... I'm guessing you looked and it's all
sold out.
Bingo?");
MsgDisp("主人公","... Bingo.
How did you know?");
VoicePlay("G110400201_04_050");
MsgDisp("Nanatsumori","If you see a girl walk into a coffee shop
alone with that look on her face, you can
easily guess.");
MsgDisp("主人公","Hehe, I see.
That's impressive,
｛七ツ森＊｝.");
ChMotion(4,1);
VoicePlay("G110400201_04_060");
MsgDisp("Nanatsumori","Oh. This item from Habatcher. I heard it
sold out the day it was released.");
MsgDisp("主人公","I see...");
VoicePlay("G110400201_04_070");
MsgDisp("Nanatsumori","But I have good news for you.");
VoicePlay("G110400201_04_080");
MsgDisp("Nanatsumori","It will be available online in 5 days.
Now you have one more chance.");
MsgDisp("主人公","Really?");
ChMotion(4,2);
VoicePlay("G110400201_04_090");
MsgDisp("Nanatsumori","Yeah.
You should give it a try.");
MsgDisp("主人公","(｛七ツ森＊｝ sure has all the info!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
