BGOpen("sc230",0);
BGMPlay("BGM_C04_NANA_C",0.01);
ChLayout(1);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("D100410000_04_000");
MsgDisp("Nanatsumori","There's less cobbler...");
MsgDisp("主人公","Eh?
But lunch only started an hour ago.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D100410000_04_010");
MsgDisp("Nanatsumori","It's only the cobbler that's gone.
I want something sweet...");
MsgDisp("主人公","Hehe.
I have some sweets in my bag.
Want them?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D100410000_04_020");
MsgDisp("Nanatsumori","I'd like to say yes but——it's okay.
Look.");
MsgDisp("主人公","That's...
That new chocolate with fruit jelly!");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D100410000_04_030");
MsgDisp("Nanatsumori","Yep.
I brought it so we could eat it together.
Okay, say \"Ahhh\"?");
MsgClose();
ChClose(4);
ChLayout(0);
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0);
SEPlay("EV_SE_544");
MsgDisp("主人公","This is sort of embarrassing...
Ahhh...");
ChEye(4,1);
ChMouth(4,3);
VoicePlay("D100410000_04_040");
MsgDisp("Nanatsumori","...That's a nice expression.
Makes me want to take a picture...");
ChEye(4,0);
ChMouth(4,5);
ChMotion(4,5);
ChCheek(4,5);
MsgDisp("主人公","Geez!
｛七ツ森＊｝, you're
teasing me!");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,3);
VoicePlay("D100410000_04_050");
MsgDisp("Nanatsumori","Haha!");
ChMotion(4,0);
MsgDisp("主人公","(Hehe!
I wish I could've taken a picture of his
surprised face too.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
