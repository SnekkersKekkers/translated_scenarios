MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChEye(1,4);
VoicePlay("G020140001_01_000");
MsgDisp("Kazama","When I come here, I suddenly remember
things from the past.");
MsgDisp("主人公","Such as what?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140001_01_010");
MsgDisp("Kazama","Like your red school bag, or the yellow
and green ribbon for traffic safety
attached to your hat.");
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,#1);
VoicePlay("G020140001_01_020");
MsgDisp("Kazama","Or the sweets we got from the old lady at
the tobacco shop when we used to walk home
together.");
MsgDisp("主人公","Sorry, I don't really remember much...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140001_01_030");
MsgDisp("Kazama","It's okay.
For me, it's just scenes that come to
mind.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140001_01_040");
MsgDisp("Kazama","I've missed out on ten years of memories,
so even recalling a little makes me happy.");
MsgDisp("主人公","We'll be able to make a lot of memories at
our three years at Haba High.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140001_01_050");
MsgDisp("Kazama","Right, from the ridiculous ones, to the
wonderful ones, I want lots of memories.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140001_01_060");
MsgDisp("Kazama","With plenty of strong characters like
Mikage-sensei and Sassa, it seems we'll be
good for the ridiculous ones.");
MsgDisp("主人公","Hehe, seems like it.");
ChMotion(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
VoiceEVSPlay(1);
VoicePlay("G020140001_01_070");
MsgDisp("Kazama","｛主人公｝, I entrust you with the
wonderful memories part.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140001_01_080");
MsgDisp("Kazama","Well, I guess ridiculous ones are okay
too?
As long as they're with you.");
MsgDisp("主人公","(I hope I can make lots of memories with
｛風真＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
