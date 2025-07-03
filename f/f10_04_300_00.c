BGOpen("sc210",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100430000_04_000");
MsgDisp("Nanatsumori?","You twins are on the cover again
for the next feature?
I seriously respect that...");
VoicePlay("F100430000_21_000");
MsgDisp("Michiru?","Right.
I also did the costumes.");
MsgDisp("主人公","(Hm? These voices...)");
VoicePlay("F100430000_04_010");
MsgDisp("Nanatsumori?","Nice.
If I could design and make my own
clothes, it'd be even more fun.");
VoicePlay("F100430000_21_010");
MsgDisp("Michiru?","Minoru-kun, don't you
make them yourself?
That——");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,1);
ChOpen(21,254,0,0,0,-1,-1,0,2);
MsgDisp("主人公","｛七ツ森＊｝, ｛みちる＊｝!
I also want to hear what 
you're talking about.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.3,0.5);
SEPlay("EV_SE_544",0);
ChEye(4,5);
ChMouth(4,5);
ChMotion(4,5,1);
ChEye(21,5);
ChMouth(21,5);
ChMotion(21,3);
VoicePlay("F100430000_21_020");
MsgDisp("Michiru","Mari!
Haa... that startled me.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
ChEye(4,5);
ChMouth(4,1);
ChMotion(4,0,1);
VoicePlay("F100430000_04_020");
MsgDisp("Nanatsumori","...You.
How much of that did you hear just now?");
MsgDisp("主人公","Eh?
something about ｛七ツ森＊｝ making
clothes, I guess...");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("F100430000_04_030");
MsgDisp("Nanatsumori","Then, that's fine.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F100430000_21_030");
MsgDisp("Michiru","Sorry, Minoru-kun.
This topic seems to be 
a taboo at school.");
ChEye(4,4);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("F100430000_04_040");
MsgDisp("Nanatsumori","No, Michiru-san isn't the one at fault.
I'm just causing trouble on my own...");
MsgDisp("主人公","(I'm even more curious now that
they're whispering about it...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
