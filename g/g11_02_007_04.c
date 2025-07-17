BGOpen("sc601",0);
ScrFadeIn(0);
MsgDisp("主人公","(Practice time should almost be over,
right...)");
VoicePlay("G110200704_02_000");
MsgDisp("Sassa","Manager!
When you're done cleaning up, let's go for
a run and cool down together!");
VoicePlay("G110200704_42_000");
MsgDisp("Member A","That's nice.
Let us join in once in a while～!");
VoicePlay("G110200704_02_010");
MsgDisp("Sassa","Okay～!");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
MsgClose();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,100,0,0,0,#1,#1,0,0);
SEPlay("EV_SE_FOOT_038");
ScrFadeIn(0);
SEPlay("EV_SE_648")VoicePlay("G110200704_42_010");
MsgDisp("Member A","One, two, three, fourー.");
VoicePlay("G110200704_33_020");
MsgDisp("Member B","Five, six, seven, eightー");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200704_02_020");
MsgDisp("Sassa","Two, three, fourー.");
VoicePlay("G110200704_42_030");
MsgDisp("Member A","Five, six, seven, eiiight.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200704_02_030");
MsgDisp("Sassa","Once in a while, it's good to cool down
with everyone, right?");
MsgDisp("主人公","Yeah, that's right.
Maybe it would be good to have scheduled a
few times a week?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200704_02_040");
MsgDisp("Sassa","Yeah, it's because you keep doing things
like that that the track and field club
stays together.");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200704_02_050");
MsgDisp("Sassa","It's because of you that I can do this
here, right now.");
MsgDisp("主人公","Eh...");
VoicePlay("G110200704_34_040");
MsgDisp("Member C","Three, two, three, fourー.");
VoicePlay("G110200704_42_050");
MsgDisp("Member A","five, six, seven, eight/");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200704_02_060");
MsgDisp("Sassa","I'm so glad you're here.
Thank you.");
SEStop("EV_SE_648",2)SEStop("EV_SE_FOOT_038",2);
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(2,0,0);
SEWait();
MsgDisp("主人公","(｛颯砂＊＊｝...
I'm so happy.
Well, I'll continue doing my best!)");
MsgClose();
