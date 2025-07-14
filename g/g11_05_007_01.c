BGOpen("sc609",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Next week is the clean-up campaign
week......)");
MsgClose();
ScrFadeOut(0,0,30);
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,0,0,1,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
Wait(30,0);
VoicePlay("G110500701_05_000");
MsgDisp("Hiiragi","Next, you'll be in charge of the
cleanup-campaign.");
MsgDisp("主人公","Yes. Come to think of it ｛柊＊＊＊｝
seemed to be having a lot of fun last
time.");
SEStop("EV_SE_712",0);
ChMotion(5,2);
VoicePlay("G110500701_05_010");
MsgDisp("Hiiragi","Yes, I got taught some fun greetings
during the beautification campaign.");
ChMouth(5,1);
ChMotion(5,0);
SEPlay("EV_SE_712",1,0.7,1);
VoicePlay("G110500701_05_020");
MsgDisp("Hiiragi","Such as 'cheers'.");
MsgDisp("主人公","Hehe.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEStop("EV_SE_712",0);
VoicePlay("G110500701_05_030");
MsgDisp("Hiiragi","That's right, when I say this greeting I
get to hear your laugh.");
MsgDisp("主人公","Yes. It's something guys often say but
it's kind of funny when ｛柊＊＊＊｝ says
it.");
ChMouth(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500701_05_040");
MsgDisp("Hiiragi","What does that mean?");
MsgDisp("主人公","What does it mean?
When ｛柊＊＊＊｝ talks casually I find
myself laughing for some odd reason.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
ChCheek(5,5);
Wait(10,0);
ChEyeOpenLevel(5,9);
SEPlay("EV_SE_712");
VoicePlay("G110500701_05_050");
MsgDisp("Hiiragi","Is that so......
When I just get to hear you laugh, I'm
happy for some reason.");
ChMotion(5,2);
ChCheek(5,0);
SEStop("EV_SE_712",0);
VoicePlay("G110500701_05_060");
MsgDisp("Hiiragi","Then, next time I'll ask you to teach me
another interesting greeting.");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_712");
MsgDisp("主人公","(I wonder what kind of greeting it'll be?
I'm kind of looking forward to it!)");
BGMStop();
SEStop("EV_SE_712",1);
MsgClose();
ScrFadeOut(0,0);
