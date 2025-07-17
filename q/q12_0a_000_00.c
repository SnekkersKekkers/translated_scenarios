BGOpen("sc810",0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChPosition(1,1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChPosition(2,2);
ScrFadeIn(0);
MsgDisp("主人公","Tomorrow is the end of the school
trip...
It went by so fast.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q120A00000_01_000");
MsgDisp("Kazama","Ah.
Nagasaki was a nice city.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q120A00000_02_000");
MsgDisp("Sassa","Yeah, it was fun.
A school trip between three childhood
friends.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("Q120A00000_01_010");
MsgDisp("Kazama","Really, it was like a dream.");
MsgDisp("主人公","｛風真＊＊｝...?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q120A00000_01_020");
MsgDisp("Kazama","This school trip made me really glad I
came back.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("Q120A00000_02_010");
MsgDisp("Sassa","What's wrong?
You're acting weird.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("Q120A00000_01_030");
MsgDisp("Kazama","I'm just grateful.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("Q120A00000_01_040");
MsgDisp("Kazama","Thanks a lot.");
MsgDisp("主人公","Yeah, I'm grateful too...
｛風真＊＊｝,
｛颯砂＊＊｝, thank you!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("Q120A00000_02_020");
MsgDisp("Sassa","Thanks from me too.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChMouthOpenLevel(1,0);
VoicePlay("Q120A00000_01_050");
MsgDisp("Kazama","......");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("Q120A00000_02_030");
MsgDisp("Sassa","......");
MsgDisp("主人公","... Hmmm?
What's up with the two of you?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("Q120A00000_01_060");
MsgDisp("Kazama","I wonder what's up with Inori?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
VoicePlay("Q120A00000_02_040");
MsgDisp("Sassa","Yeah, that timing was a little weird.");
ChEye(1,0);
SEPlay("EV_SE_837");
SEWait();
MsgDisp("主人公","Ah, it's from ｛氷室＊＊｝.");
ChMouth(1,3);
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("Q120A00000_02_050");
MsgDisp("Sassa","Oh man, how impressive, Inori.");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("Q120A00000_01_070");
MsgDisp("Kazama","Yeah.
I'm sure he's watching from somewhere.");
MsgDisp("主人公","(Hehe, it was a really fun school trip.
Thanks to you two.
Thanks.)");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
