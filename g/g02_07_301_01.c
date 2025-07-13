ChLayout(1);
MsgClose();
ChOpen(7,255,3,0,0,#1,#1,0,0);
VoicePlay("G020730101_07_000");
MsgDisp("Mikage","There's a lot of fireflies over there.
Maybe there's a popular person?");
MsgDisp("主人公","Hehe, a person popular amongst fireflies?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
ChEyeOpenLevel(7,8);
VoicePlay("G020730101_07_010");
MsgDisp("Mikage","Yeah, a person like you?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
ChEyeOpenLevel(7,10);
VoicePlay("G020730101_07_020");
MsgDisp("Mikage","A person that boys and 
girls just flock towards.");
MsgDisp("主人公","I-Is that so?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,5);
VoicePlay("G020730101_07_030");
MsgDisp("Mikage","I guess you're still unaware of it.
That's reassuring and puts me at ease.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,1);
VoicePlay("G020730101_07_040");
MsgDisp("Mikage","Hm?");
MsgDisp("主人公","What's wrong?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("G020730101_07_050");
MsgDisp("Mikage","Me too, maybe.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G020730101_07_060");
MsgDisp("Mikage","I also was one of the critters drawn to
you.");
MsgDisp("主人公","｛御影＊＊｝......?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
ChEyeOpenLevel(7,8);
VoicePlay("G020730101_07_070");
MsgDisp("Mikage","Really, 
that's what this situation is, isn't it??");
MsgDisp("主人公","(Being together with ｛御影＊＊｝ and
everyone is really fun though ......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
BGMStop();
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
