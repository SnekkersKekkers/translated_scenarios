ChLayout(1);
MsgClose();
ChOpen(3,255,4,4,4,#1,#1,0,0);
VoicePlay("G020310200_03_000");
MsgDisp("Honda","Hey, what do you think about our
relationship?");
MsgDisp("主人公","What do you mean?");
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G020310200_03_010");
MsgDisp("Honda","Yeah, I figured you'd say that.");
ChEye(3,0);
ChMouth(3,0);
VoicePlay("G020310200_03_020");
MsgDisp("Honda","Actually, my sister asked me this question
yesterday.
I talk about you a lot.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G020310200_03_030");
MsgDisp("Honda","I've always felt comfortable with the way
things are now. You show interest in what
I say, and I really enjoy our
conversations.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("G020310200_03_040");
MsgDisp("Honda","But after she asked, I realized I don't
want things to stay the same.
I want to get closer to you.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("G020310200_03_050");
MsgDisp("Honda","You know that phrase, \"more than friends,
less than lovers\"?
I want to take a step beyond that...");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("G020310200_03_060");
MsgDisp("Honda","...But what happens if we do...?");
MsgDisp("主人公","...Hehe!");
ChEye(3,1);
ChMouth(3,4);
ChMotion(3,1);
VoicePlay("G020310200_03_070");
MsgDisp("Honda","Ahー, don't laugh!
I'm still in the middle of figuring it out
myself.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("G020310200_03_080");
MsgDisp("Honda","But honestly, I'd be really happy if we
could take our relationship to a new
level!");
MsgDisp("主人公","Yeah, thanks ｛本多＊＊｝.");
MsgDisp("主人公","(I see, that's what ｛本多＊＊｝
is thinking about...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
