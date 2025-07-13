MsgClose();
ChOpen(2,255,4,0,2,#1,#1,0,0);
VoicePlay("G020220000_02_000");
MsgDisp("Sassa","I have a bit of a question for you,
is it okay?");
MsgDisp("主人公","Yeah, go ahead.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020220000_02_010");
MsgDisp("Sassa","You know, I understand that I'm not the
one who's closest to you.");
MsgDisp("主人公","Eh......");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020220000_02_020");
MsgDisp("Sassa","That's fine though.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("G020220000_02_030");
MsgDisp("Sassa","But, you coming here today, does that mean
there's a chance for me too?");
MsgDisp("主人公","｛颯砂＊＊｝......");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020220000_02_040");
MsgDisp("Sassa","If there's a chance,
I'll chase after it.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020220000_02_050");
MsgDisp("Sassa","Well, I'm normally the type to go on 
and run ahead though.");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("G020220000_02_060");
MsgDisp("Sassa","That's where you laugh.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G020220000_02_070");
MsgDisp("Sassa","But seriously, I'll catch up soon.");
MsgDisp("主人公","Hehe, if you catch up, there won't be
anyone else around?");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("G020220000_02_080");
MsgDisp("Sassa","Yeah, you're right.
Then, I'll chase after you with
just the right amount of effort");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,2);
ChEyeOpenLevel(2,7);
VoicePlay("G020220000_02_090");
MsgDisp("Sassa","Finding that right amount is tricky
though......");
MsgDisp("主人公","(｛颯砂＊＊｝ today
seems a bit different than normal......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
