MsgClose();
ChOpen(2,255,2,0,0,#1,#1,0,0);
VoicePlay("G020210001_02_000");
MsgDisp("Sassa","It feels like we're in a different world
than usual.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020210001_02_010");
MsgDisp("Sassa","You know, it almost feels like we can hear
each other's thoughts, just like the
rumors say?");
MsgDisp("主人公","That's right...
Can I try hearing ｛颯砂＊＊｝'s inner voice?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020210001_02_020");
MsgDisp("Sassa","Alright, let's try talking with that
premise, then.");
MsgDisp("主人公","Hm?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoiceEVSPlay(2);
VoicePlay("G020210001_02_030");
MsgDisp("Sassa","｛主人公｝, thanks for today...");
MsgDisp("主人公","Umm...
｛颯砂＊＊｝, I also had fun...");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("G020210001_02_040");
MsgDisp("Sassa","Haha, it's fine.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoiceEVSPlay(2);
VoicePlay("G020210001_02_050");
MsgDisp("Sassa","｛主人公｝, I like being number one.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G020210001_02_060");
MsgDisp("Sassa","It's not just about track.
That's why, I want to also be your number
one.");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoiceEVSPlay(2);
VoicePlay("G020210001_02_070");
MsgDisp("Sassa","｛主人公｝, that is all.");
MsgDisp("主人公","(｛颯砂＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
