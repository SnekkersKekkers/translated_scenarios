MsgClose();
ChOpen(2,255,2,0,0,#1,#1,0,0);
VoicePlay("G020220001_02_000");
MsgDisp("Sassa","You know, there's a good thing going
on......");
MsgDisp("主人公","You're right.
It's overflowing with firefly lights.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
VoicePlay("G020220001_02_010");
MsgDisp("Sassa","Yeah, same goes for the fireflies......
But I was talking about you and him.");
MsgDisp("主人公","Huh?");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("G020220001_02_020");
MsgDisp("Sassa","I saw you two before but I just couldn't
get myself to talk to you.
I'd never seen you smile like that before.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020220001_02_030");
MsgDisp("Sassa","But if I feel that way, then, as much as I
hate to admit it, it means that I can't
make you smile like that.");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("G020220001_02_040");
MsgDisp("Sassa","I totally lost.");
MsgDisp("主人公","｛颯砂＊＊｝......");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020220001_02_050");
MsgDisp("Sassa","But since you came here today, the
distance between him and me is still one I
can cover, right?");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("G020220001_02_060");
MsgDisp("Sassa","I'm really not used to someone running in
front of me.");
MsgDisp("主人公","(What's wrong with ｛颯砂＊＊｝......? )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
