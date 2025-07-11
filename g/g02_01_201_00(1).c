MsgClose();
ChOpen(1,255,0,0,0,-1,-1,0,0);
VoicePlay("G020120100_01_000");
MsgDisp("Kazama","Coming here takes quite a bit of courage,
doesn't it?");
MsgDisp("主人公","Eh?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("G020120100_01_010");
MsgDisp("Kazama","Don't 'huh' me. I'm talking about you.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020120100_01_020");
MsgDisp("Kazama","I'm only looking at you. But near you,
there's someone else, isn't there?");
MsgDisp("主人公","Umm......");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020120100_01_030");
MsgDisp("Kazama","......Sorry. But, I want to know your
feelings even a little.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020120100_01_040");
MsgDisp("Kazama","Maybe that's why I brought you 
to a place like this.");
MsgDisp("主人公","I like it here,
it's beautiful, you know?");
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,0,1);
VoicePlay("G020120100_01_050");
MsgDisp("Kazama","I've known for a long time. You like
beautiful things, always looking for fun.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020120100_01_060");
MsgDisp("Kazama","Haa.
It's cowardly of me to use your feelings 
like that to bring you here.");
MsgDisp("主人公","That's not true.");
ChEye(1,0);
ChMouth(1,4);
ChMotion(1,1);
VoicePlay("G020120100_01_070");
MsgDisp("Kazama","I know you better than anyone. There's no
need for me to rely on strange things,
like listening to the voice of your heart.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020120100_01_080");
MsgDisp("Kazama","Being at a slight disadvantage is
the perfect handicap, right?");
MsgDisp("主人公","(｛風真＊＊｝,
you seem troubled about something......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
