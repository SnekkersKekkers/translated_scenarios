MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("P650700008_07_000");
MsgDisp("Mikage","｛主人公｝, this stylish cafe has a
good reputation.");
MsgDisp("主人公","｛御影＊＊｝, does it really!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P650700008_07_010");
MsgDisp("Mikage","Yes, not just the appearance but the
herbal tea and vegetables picked that
morning are also popular.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P650700008_07_020");
MsgDisp("Mikage","This talk even reached the staffroom.");
MsgDisp("主人公","Yay! I'm happy.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P650700008_07_030");
MsgDisp("Mikage","Yeah, thanks to this, Vice Principal
Himuro even praised me a little.");
MsgDisp("主人公","Hehe, aren't you glad?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P650700008_07_040");
MsgDisp("Mikage","Yeah. We raised nome beautiful vegetables,
I have to thank you.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P650700008_07_050");
MsgDisp("Mikage","You had the best results at your final
cultural festival. Congratulations.");
MsgDisp("主人公","(Yay, a huge success! I was able to make a
good memory at the last cultural festival
of my high school life...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
