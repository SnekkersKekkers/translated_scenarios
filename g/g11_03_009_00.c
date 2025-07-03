BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Lots of books are going to be delivered
today. I'll do my best!)");
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,0,0,0,-1,-1,0,0);
VoiceEVSPlay(3);
VoicePlay("G110300900_03_000");
MsgDisp("Honda","｛主人公｝,
Today is going to be busy.
Let's do our best!");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev003",0);
ChOpen(3,100,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","......Huh?
｛本多＊＊｝ still hasn't taken a break?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G110300900_03_010");
MsgDisp("Honda","The manager has put me in charge of these
bookshelves, so I'm thinking about
changing up the books on display.");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110300900_03_020");
MsgDisp("Honda","When customers look at the cover, 
it catches their eye, right?");
MsgDisp("主人公","Amazing. This is ｛本多＊＊｝ 's
recommendations corner, right?'");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300900_03_030");
MsgDisp("Honda","Yeah, yeah.
That sort of thing would be great.");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110300900_03_040");
MsgDisp("Honda","In the future, wouldn't it be so fun if we
could gather all the books we like and
open a bookstore together?");
MsgDisp("主人公","A bookstore that only sells books selected
by ｛本多＊＊｝......I bet it would be
really popular.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G110300900_03_050");
MsgDisp("Honda","You would choose them too?
Because that store will be mine and yours.");
MsgDisp("主人公","Eh.");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300900_03_060");
MsgDisp("Honda","Right?");
MsgDisp("主人公","(I have a feeling he's saying something
amazing...... But, if we could open that
store, I think it would be really
fun......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
