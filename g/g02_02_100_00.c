MsgClose();
ChOpen(2,255,3,0,4,#1,#1,0,0);
VoicePlay("G020210000_02_000");
MsgDisp("Sassa","Ohh, it's really pretty...
Just how many are there?");
MsgDisp("主人公","Yeah, there really is a lot of them.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,3);
VoicePlay("G020210000_02_010");
MsgDisp("Sassa","But, you know, no matter how many there
are, I wanna win.");
MsgDisp("主人公","And I'm positive you will win,
｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020210000_02_020");
MsgDisp("Sassa","... Mm?
What're you talking about?");
MsgDisp("主人公","Umm... track and field.
Weren't you?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020210000_02_030");
VoiceEVSPlay(2);
MsgDisp("Sassa","I was talking about you,
｛主人公｝.");
MsgDisp("主人公","?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020210000_02_040");
MsgDisp("Sassa","I don't know how many people are
competing, but I'm gonna keep this up and
win the fight for you! ...Is what I was
talking about.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ChCheek(2,10);
VoicePlay("G020210000_02_050");
MsgDisp("Sassa","So, basically, I was saying that I'm in
the running. No matter the rival that
shows up, I'm not giving him my place
beside you.");
MsgDisp("主人公","(? 'The fight for me'?? What is
｛颯砂＊＊｝ talking about...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
