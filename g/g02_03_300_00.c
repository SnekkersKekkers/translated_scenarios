ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
VoicePlay("G020330000_03_000");
MsgDisp("Honda","Speaking of fireflies (hotaru), have you
heard of 'hotaru-te'?");
MsgDisp("主人公","Hotaru-te...?");
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("G020330000_03_010");
MsgDisp("Honda","Yeah, it's porcelain with openwork
carvings that make patterns visible
depending on the light. It's called
'hotaru-te' because the patterns resemble
firefly light.");
ChMotion(3,4);
VoicePlay("G020330000_03_020");
MsgDisp("Honda","I saw it at Ryou-kun's place the other
day.
It was really beautiful.");
MsgDisp("主人公","｛本多＊＊｝ knows about pottery too?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5);
VoicePlay("G020330000_03_030");
MsgDisp("Honda","Not at all!
When it comes to art and antiques, I can't
compare to Ryo.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("G020330000_03_040");
MsgDisp("Honda","Mii was there that day too, and I
bombarded Ryo with questions. But they
both stayed patient until the end.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("G020330000_03_050");
MsgDisp("Honda","Mii-kun has incredible fashion sense and
self-presentation skills.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,2);
VoicePlay("G020330000_03_060");
MsgDisp("Honda","He doesn't just follow trends; he adds his
own touch and creates something unique.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("G020330000_03_070");
MsgDisp("Honda","I could never do that.");
MsgDisp("主人公","Hehe, it sounds like you all respect each
other.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("G020330000_03_080");
MsgDisp("Honda","I'm the one getting inspired one-sidedly.
I'm really glad I met them!");
MsgDisp("主人公","(Hehe, ｛風真＊＊｝ and ｛七ツ森＊｝
would say the same thing wouldn't they?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
