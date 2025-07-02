BGOpen("wf200",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I wonder if Kuya-san is here......)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C09_KUYA_A",0.01);
ChOpen(9,35,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, he's here!");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,4,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030900600_09_000");
MsgDisp("Kuya","Hey.
Did you come here to see me again today
too?");
ChEye(9,2);
ChMouth(9,4);
ChMotion(9,2,1);
VoicePlay("D030900600_09_010");
MsgDisp("Kuya","But you have to wait a minute.
I need to go help out the Lost and Found.");
MsgDisp("主人公","Lost and Found?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900600_36_000");
MsgDisp("Man","I really appreciate your help, Mister.
You can use these to pick things up.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900600_09_020");
MsgDisp("Kuya","Understood.");
MsgDisp("主人公","Uhm......What's with the basket and
tongs?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900600_09_030");
MsgDisp("Kuya","They're for chestnut picking.
Want to do it with me?");
MsgDisp("主人公","Eh?");
VoicePlay("D030900600_36_010");
MsgDisp("Man","That would help a lot!
Miss, please, take these!");
MsgDisp("主人公","(Ehh∋)");
MsgClose();
ChClose(9);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
ChOpen(9,35,0,0,0,-1,-1,0,0);
VoicePlay("D030900600_36_020");
MsgDisp("Man","I finally finished picking them all......
It's because of you guys.
Thanks a lot!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,1,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900600_09_040");
MsgDisp("Kuya","It's nothing.
Getting to pick chestnuts in this town
is a pretty rare experience.");
ChEyeOpenLevel(9,-1);
VoicePlay("D030900600_36_030");
MsgDisp("Man","Hahaha!　I guess so!
I'm really grateful!");
MsgDisp("主人公","Phew......Chestnut picking was fun, huh?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900600_09_050");
MsgDisp("Kuya","It really was.
I can't believe those were all fake.");
MsgDisp("主人公","Eh?
They were?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900600_09_060");
MsgDisp("Kuya","That man is an \"art\"ist.
He was on his way to set up the venue
for his \"art\" exhibition.");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,1,1);
VoicePlay("D030900600_09_070");
MsgDisp("Kuya","He accidentally spilled all those 
chestnuts props everywhere.");
MsgDisp("主人公","Really, it's like this kind of thing
follows you around, Kuya-san......");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030900600_09_080");
MsgDisp("Kuya","Is that a detestable thing?");
MsgDisp("主人公","I didn't mean it that way.
As usual, you're still getting involved
in everything.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900600_09_090");
MsgDisp("Kuya","Oh, I get what you mean.
I guess I can't deny that.");
MsgDisp("主人公","Hehe!　I thought that being a \"Jack
of All Trades\" would be really tiresome
but I guess that isn't the case?");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030900600_09_100");
MsgDisp("Kuya","What do you mean?");
MsgDisp("主人公","Even though you have to help people
again, it's enjoyable. And I guess you
also got some \"art\" experience?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,3,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900600_09_110");
MsgDisp("Kuya","Ah......
I guess I feel the same way about what
happened earlier.");
ChEye(9,3);
ChMouth(9,3);
ChMotion(9,0,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900600_09_120");
MsgDisp("Kuya","......Huh?
Don't tell me you're becoming a \"Jack
of All Trades\" too?
Haha!");
MsgDisp("主人公","(Kuya-san's penchant for getting
involved in things is still going strong");
MsgDisp("主人公","(But I guess I'm starting to see the
appeal in being a \"Jack of All Trades\"?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
