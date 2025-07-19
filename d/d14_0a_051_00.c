ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("D140A05100_02_000");
MsgDisp("Sassa","Hey, what do you talk to Ryota about when
it's just you two?");
ChMouth(1,2);
MsgDisp("主人公","Eh, what you say...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("D140A05100_01_000");
MsgDisp("Kazama","What's up with that?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D140A05100_06_000");
MsgDisp("Himuro","Nozomu-senpai, you should stop.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("D140A05100_02_010");
MsgDisp("Sassa","Do you not want to know, Inori?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140A05100_01_010");
MsgDisp("Kazama","Are you two just going to blather on
amongst yourselves?");
MsgDisp("主人公","We only talk about normal things...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D140A05100_01_020");
MsgDisp("Kazama","Right.
We enjoy our normal conversations more
than enough.");
ChEye(1,0);
ChEyeOpenLevel(1,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("D140A05100_06_010");
MsgDisp("Himuro","Ryota-senpai just naturally puts himself
above everyone.
There's no point in involving yourself.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
VoicePlay("D140A05100_02_020");
MsgDisp("Sassa","I see.
Inori, you understand Ryota well.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D140A05100_01_030");
MsgDisp("Kazama","Say whatever you want.");
MsgDisp("主人公","(When I talk to ｛風真＊＊｝ when it's
just the two of us...
What kind of conversations do we have?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
