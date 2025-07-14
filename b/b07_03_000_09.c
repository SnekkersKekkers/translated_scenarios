MsgDisp("主人公","Hey, I want to ask you a serious question,
okay?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("B070300000_03_490");
MsgDisp("Honda","What is it?");
MsgDisp("主人公","Uhm, what do you think about \"Love\"?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("B070300000_03_500");
MsgDisp("Honda","I'd like to know that too.");
MsgDisp("主人公","Eh?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("B070300000_03_510");
MsgDisp("Honda","It's not that I don't know anything about
it at all.
I have a few hints.");
ChEye(3,0);
ChEyeOpenLevel(3,0);
VoicePlay("B070300000_03_520");
MsgDisp("Honda","Sometimes when we're together, I feel like
things start to get a bit tense.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("B070300000_03_530");
MsgDisp("Honda","At first, I didn't understand what that
meant. But maybe it's because of \"Love\" or
something like that?");
MsgDisp("主人公","Uhm......");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,5);
VoicePlay("B070300000_03_540");
MsgDisp("Honda","Uuu......");
MsgDisp("主人公","Eh! What's wrong?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4);
ChCheek(3,5);
VoicePlay("B070300000_03_550");
MsgDisp("Honda","It's happening right now.
The tension.
Sometimes this happens when we talk.");
MsgDisp("主人公","That's somewhat embarrassing......");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("B070300000_03_560");
MsgDisp("Honda","Ah, maybe you get this way too?
When you hear my voice.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
ChCheek(3,8);
VoiceEVSPlay(3);
VoicePlay("B070300000_03_570");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Uhm......");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
ChCheek(3,0);
VoicePlay("B070300000_03_580");
MsgDisp("Honda","Huh, is that no good? Did I sound weird?
It seems like my voice has that same
effect on you......");
MsgDisp("主人公","(I wonder if I'll get to learn ｛本多＊＊｝
's thoughts on \"Love\" some day......?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
