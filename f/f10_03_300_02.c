BGOpen("ex080",0);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(I wonder if I should eat at the cafeteria
today...)");
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("F100330002_03_000");
MsgDisp("Honda","｛主人公｝, are you going
to the cafeteria today?");
MsgDisp("主人公","Ah, you too, ｛本多＊＊｝?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100330002_03_010");
MsgDisp("Honda","Yup, I'm meeting up with Chiru-chan and
Pika-chan");
MsgDisp("主人公","Eh?");
VoicePlay("F100330002_22_000");
MsgDisp("Hikaru?","Honda-kun!
Mari!");
ChPosition(3,1);
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
MsgClose();
SEWait();
ChOpen(22,254,0,0,3,#1,#1,0,0,0,30);
ChOpen(21,254,0,0,0,#1,#1,0,2,0,30);
ChMotion(22,4,1);
VoicePlay("F100330002_22_010");
MsgDisp("Hikaru","Hey, hey, is Mari coming too?");
MsgDisp("主人公","Um, we just met here.
Did the three of you plan to meet up?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F100330002_21_000");
MsgDisp("Michiru","Right. Honda said he had something he
wanted to consult us about. What is it?");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("F100330002_03_020");
MsgDisp("Honda","My little sister's obsessed with dieting,
and she says she won't eat breakfast.");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,0,1);
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("F100330002_21_010");
MsgDisp("Michiru","I don't really recommend that...");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F100330002_03_030");
MsgDisp("Honda","She doesn't listen to me at all.
But I think she'll listen to Chiru-chan
and Pika-chan.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("F100330002_22_020");
MsgDisp("Hikaru","Leave it to us!
We'll give you the right advice, so take a
video and show it to your sister.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100330002_03_040");
MsgDisp("Honda","Yeah yeah, thank you.
She'll be happy to receive a video
message!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100330002_21_020");
MsgDisp("Michiru","If so, why not do it over lunch?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F100330002_22_030");
MsgDisp("Hikaru","That's great! I'll teach her a diet method
that will let you enjoy food and still be
able to lose weight♪");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F100330002_22_040");
MsgDisp("Hikaru","Then come on, Mari, let's go together.");
MsgDisp("主人公","Eh, me too∋");
MsgDisp("主人公","(I got caught up in this...
But, I hope this will be able to reach
｛本多＊＊｝'s younger sister.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
