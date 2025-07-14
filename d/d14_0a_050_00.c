ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,0);
VoicePlay("D140A05000_02_000");
MsgDisp("Sassa","Hey, Inori.
Do you think we're interrupting?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("D140A05000_06_000");
MsgDisp("Himuro","Yes. To be honest, I don't feel very
comfortable.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
MsgDisp("主人公","Eh, what's up.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D140A05000_02_010");
MsgDisp("Sassa","I mean, I'm guessing you guys are getting
along now right?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("D140A05000_01_000");
MsgDisp("Kazama","Ha...?
Sassa, what are you talking about?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("D140A05000_06_010");
MsgDisp("Himuro","Eh... were we wrong?");
MsgDisp("主人公","｛風真＊＊｝...?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140A05000_01_010");
MsgDisp("Kazama","We haven't only recently started getting
along.");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4,1);
ChEyeOpenLevel(2,0);
VoicePlay("D140A05000_02_020");
MsgDisp("Sassa","Hahaha!
So that's what you're angry about.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("D140A05000_06_020");
MsgDisp("Himuro","It's that huh...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("D140A05000_01_020");
MsgDisp("Kazama","Of course right? Our history together
isn't something that started today or
yesterday. Right?");
MsgDisp("主人公","Erm...?");
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("D140A05000_02_030");
MsgDisp("Sassa","Inori. It looks like we don't stand a
chance.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("D140A05000_06_030");
MsgDisp("Himuro","Right.");
MsgDisp("主人公","(This is somewhat embarrassing...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
