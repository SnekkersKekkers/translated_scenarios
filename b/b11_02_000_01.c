MsgClose();
ChClose(2,0,0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Huh?
｛颯砂＊＊｝ still isn't here yet..");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("B110200001_34_000");
MsgDisp("Guy","Sorry to keep you waiting...");
MsgDisp("主人公","Eh, ｛颯砂＊＊｝...?");
SEPlay("EV_SE_542",0,0.6);
MsgClose();
Wait(50,0);
ChOpen(34,254,0,0,0,-1,-1,0,0);
VoicePlay("B110200001_34_010");
MsgDisp("Guy","You can call me that too.
I'll change my player name.");
MsgDisp("主人公","Ehh?");
ChPosition(34,2);
SEPlay("EV_SE_550");
MsgClose();
ChOpen(2,31,3,0,0,-1,-1,0,1,0,30);
VoicePlay("B110200001_02_000");
MsgDisp("Sassa","Of course not.
don't just take someone's 
name as you like.");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B110200001_02_010");
MsgDisp("Sassa","Sorry I was late.");
ChEye(34,2);
ChMouth(34,2);
VoicePlay("B110200001_34_020");
MsgDisp("Guy","You can't.
Can't have the same name in the party.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
ChEyeOpenLevel(2,7);
VoicePlay("B110200001_02_020");
MsgDisp("Sassa","Hm? What are you saying?");
MsgDisp("主人公","I don't get it...");
MsgDispSksp(1,5);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("B110200001_02_030");
MsgDisp("Sassa","Hey, you...
Have you been standing
here this whole time?");
MsgDispSksp(0);
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110200001_34_030");
MsgDisp("Guy","Yeah, cause this is the
rendevouz point.");
MsgDispSksp(1,5);
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("B110200001_02_040");
MsgDisp("Sassa","Idiot! You'll get heatstroke.");
MsgDispSksp(0);
VoicePlay("B110200001_34_040");
MsgDisp("Guy","Eh?");
MsgDispSksp(1,5);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("B110200001_02_050");
MsgDisp("Sassa","Hey, go sit in the shade.
I'll clal some staff over.");
MsgDispSksp(0);
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110200001_34_050");
MsgDisp("Guy","Eh, no way.
DOn'yt report me to the adminsー!");
SEPlay("EV_SE_580");
MsgClose();
ChClose(34);
ChPosition(2,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("B110200001_02_060");
MsgDisp("Sassa","Ah, idiot! Don't run!");
MsgDisp("主人公","He left...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("B110200001_02_070");
MsgDisp("Sassa","Well, I wonder if he'll be okay to run.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B110200001_02_080");
MsgDisp("Sassa","Anyways, I'm sorry.
I got help up, and you ended up
in this scary situation.");
MsgDisp("主人公","No, I'm alright.
Thank you for helping me.
｛颯砂＊＊｝ is kind, isn't he?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChCheek(2,10);
VoicePlay("B110200001_02_090");
MsgDisp("Sassa","Am I? Well, let's go back to square
one and have fun, okay?");
