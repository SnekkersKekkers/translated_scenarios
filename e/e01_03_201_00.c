BGOpen("fp700",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright...... I think it's time to go
home.)");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,255,0,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("E010320100_03_000");
MsgDisp("Honda","｛主人公｝, you went to the flea market
too?");
MsgDisp("主人公","Ah, ｛本多＊＊｝ too?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010320100_03_010");
MsgDisp("Honda","Yep yep! I found the book I wanted right
away, but Mii-kun is still confused about
what accessories he wants.");
MsgDisp("主人公","Mii-kun, is that......");
ChPosition(3,1);
MsgClose();
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,255,0,2,2,#1,#1,0,2);
ChMotion(4,1,1);
VoicePlay("E010320100_04_000");
MsgDisp("Nanatsumori","......Hold up.
The way Dahon says it makes it sound like
we came here together.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010320100_04_010");
MsgDisp("Nanatsumori","Yo. Are you also shopping at the flea
market?");
MsgDisp("主人公","Yeah, I'm shopping.
｛七ツ森＊｝ did you decide on any
accessories yet?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("E010320100_03_020");
MsgDisp("Honda","I got it.
Why don't you choose?
Since Mii-kun is so indecisive.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("E010320100_04_020");
MsgDisp("Nanatsumori","You can't just call people
indecisive.");
MsgDisp("主人公","I'm curious to see what accessories
｛七ツ森＊｝ is interested in......");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("E010320100_03_030");
MsgDisp("Honda","Right?
I'm happy for you, Mii-kun.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("E010320100_04_030");
MsgDisp("Nanatsumori","There's no need to worry.
I already bought something.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,5,1);
VoicePlay("E010320100_03_040");
MsgDisp("Honda","Ehh∋ Why? I wanted the three of us to
choose something together!");
MsgDisp("主人公","Hehe, yeah.
Maybe that would've been nice.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("E010320100_03_050");
MsgDisp("Honda","See? Mii-kun, why don't you search for
something again?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,1,1);
VoicePlay("E010320100_04_040");
MsgDisp("Nanatsumori","I'm not doing that.");
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("E010320100_04_050");
MsgDisp("Nanatsumori","I'm going to walk around once more by
myself.
Cya later.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
ChPosition(3,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010320100_03_060");
MsgDisp("Honda","Well, I'll go check out the used books
section one more time.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
VoicePlay("E010320100_03_070");
MsgDisp("Honda","Mii-kun, wait up!");
MsgDisp("主人公","(Hehe, looks like ｛本多＊＊｝ and
｛七ツ森＊｝ are enjoying the flea
market!)");
MsgClose();
ScrFadeOut(0,0);
