BGOpen("wf700",2);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040206401_02_000");
MsgDisp("Sassa","There are a lot of food stalls again this
year.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B040206401_02_010");
MsgDisp("Sassa","When I was a kid I used to beg my parents
for those shiny toys.");
MsgDisp("主人公","Yeah, I think I did that too.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
VoicePlay("B040206401_02_020");
MsgDisp("Sassa","You too?
I was wondering why you seemed so curious?
...... Want to buy one?");
MsgDisp("主人公","(｛颯砂＊＊｝ is having fun like a kid!)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_022",1);
SEWait();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B040206401_02_030");
MsgDisp("Sassa","It's finally time.
Let's move!");
MsgDisp("主人公","Okay!");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(2,0,0);
