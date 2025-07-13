ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChCheek(1,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChCheek(3,0);
MsgDisp("主人公","Mmm, delicious♪");
ChMouthOpenLevel(1,0);
VoicePlay("D140B06002_01_000");
MsgDisp("Kazama","............");
MsgDisp("主人公","......?
｛風真＊＊｝, is there something
on my face?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("D140B06002_01_010");
MsgDisp("Kazama","You're the same as usual huh?");
MsgDisp("主人公","Eh?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("D140B06002_03_000");
MsgDisp("Honda","Mii-kun isn't here today.
Aren't you lonely?");
MsgDisp("主人公","That's...");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D140B06002_01_020");
MsgDisp("Kazama","............");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D140B06002_03_010");
MsgDisp("Honda","That's?
Please continue");
MsgDisp("主人公","Do I have to say it?");
ChEyeOpenLevel(1,0);
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("D140B06002_03_020");
MsgDisp("Honda","Aaah!
Ryo-kun, if we hear the answer, 
won't we be the ones feeling 
lonely?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("D140B06002_01_030");
MsgDisp("Kazama","Not really?
I don't really think anything of it.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ChEyeOpenLevel(3,8);
VoicePlay("D140B06002_03_030");
MsgDisp("Honda","That face.
I know you're trying to act tough.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B06002_01_040");
MsgDisp("Kazama","Shut up.");
ChEyeOpenLevel(3,#1);
MsgDisp("主人公","(｛風真＊＊｝ is worried about
me and ｛七ツ森＊｝...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(3,0,0);
