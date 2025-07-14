MsgDisp("主人公","What sports do you do?");
VoicePlay("B070500000_05_110");
MsgDisp("Hiiragi","I have no experience in competitive
sports. I have done some basic stamina
training... as part of my studies.");
MsgDisp("主人公","They say stamina training is crucial to
actors.");
ChMouth(5,4);
VoicePlay("B070500000_05_120");
MsgDisp("Hiiragi","Yes. There's sword fights in my
performances, so I also need physical
strength.");
MsgDisp("主人公","Sword fights, huh....");
ChMotion(5,4);
VoicePlay("B070500000_05_130");
MsgDisp("Hiiragi","Are you interested.");
MsgDisp("主人公","No way.
I just thought it was cool.");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("B070500000_05_140");
MsgDisp("Hiiragi","It's alright to think that. You're welcome
anytime. We'll have an application form
ready and waiting.");
MsgDisp("主人公","(...Huh?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
