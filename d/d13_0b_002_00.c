MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc300",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
It's already graduation soon huh?)");
MsgDisp("主人公","(For three years, I got to be in the same
class as ｛風真＊＊｝ )");
MsgDisp("主人公","(...
｛風真＊＊｝, I wonder what
you're doing right now in England?)");
SEPlay("EV_SE_DOOR_019");
SEWait();
MsgDisp("主人公","...Hm?");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE",0,0.9);
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,254,0,0,0,#1,#1,0,0);
VoicePlay("D130B00200_03_000");
MsgDisp("Honda","I found you!");
MsgDisp("主人公","｛本多＊＊｝.
What are you in such a hurry for?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("D130B00200_03_010");
MsgDisp("Honda","I thought that if you were still here, we
could go home together every once in a
while...");
ChPosition(3,1);
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,2);
VoicePlay("D130B00200_04_000");
MsgDisp("Nanatsumori","Huh.
You're still here.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
ChEye(4,2);
ChMouth(4,3);
VoiceEVSPlay(4);
VoicePlay("D130B00200_04_010");
MsgDisp("Nanatsumori","｛主人公｝.
Were you thinking of Kazama just now?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("D130B00200_03_020");
MsgDisp("Honda","That's right isn't it?
You two were always in the same class so
it's gotten quite lonely right?");
ChMotion(4,0,1);
VoicePlay("D130B00200_04_020");
MsgDisp("Nanatsumori","Dahon wouldn't understand.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
ChEye(4,5);
ChMouth(4,1);
ChMotion(4,5,1);
SEPlay("EV_SE_837",0);
SEWait();
Wait(10,1);
VoicePlay("D130B00200_03_030");
MsgDisp("Honda","It's a message from Ryo-kun!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D130B00200_04_030");
MsgDisp("Nanatsumori","I... got one too.");
MsgDisp("主人公","Looks like I didn't get one.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D130B00200_04_040");
MsgDisp("Nanatsumori","Ahー...I see. That guy's warning us all
the way from england.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("D130B00200_03_040");
MsgDisp("Honda","Is he just a worrywart... or is he
jealous?");
MsgDisp("主人公","???");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D130B00200_04_050");
MsgDisp("Nanatsumori","Well, I'll reply him later. We rarely go
home altogether? There are only 4 days
until graduation after all.");
ChSet(3,3);
VoicePlay("D130B00200_03_050");
VoiceEVSPlay(3);
MsgDisp("Honda","That's right!
Let's go, ｛主人公｝.");
MsgDisp("主人公","...Yeah!");
MsgDisp("主人公","(I'm curious what ｛風真＊＊｝'s
message said though... I see, there is
only a little bit of time left where I can
be with everyone together like this...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
ChClose(3,0,0);
