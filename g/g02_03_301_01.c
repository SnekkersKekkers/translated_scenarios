ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0);
VoicePlay("G020330101_03_000");
MsgDisp("Honda","The other day, 
I saw you in the hallway during break
and tried to call out to you.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("G020330101_03_010");
MsgDisp("Honda","But just before that,
it seemed like someone else called you, 
and you quickly disappeared.");
MsgDisp("主人公","That happened?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G020330101_03_020");
MsgDisp("Honda","Yeah. And it happened five times in a row.");
MsgDisp("主人公","Huh, that many times∋");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("G020330101_03_030");
MsgDisp("Honda","Maybe I just have bad timing,
or maybe you're just too popular......");
MsgDisp("主人公","That's not......");
ChMotion(3,4);
VoicePlay("G020330101_03_040");
MsgDisp("Honda","But I'm sure there are other people 
who want to talk to you like I do, right?");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("G020330101_03_050");
MsgDisp("Honda","Hmm, seems like I have quite a few
rivalsー.");
MsgDisp("主人公","(Rivals huh......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,-1);
ChMouthOpenLevel(3,-1);
ChCheek(3,0);
