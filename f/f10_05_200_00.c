BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100520000_05_000");
MsgDisp("Hiiragi?","I would absolutely love to do that.
Can I really ask that of you?");
VoicePlay("F100520000_01_000");
MsgDisp("Kazama?","I don't mind.
But I don't think there's anything that
interesting.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,254,4,0,4,#1,#1,0,1);
ChOpen(1,254,1,0,0,#1,#1,0,2);
MsgDisp("主人公","Ah, ｛柊＊＊＊｝ and ｛風真＊＊｝.
What are you doing?");
ChMotion(1,0);
VoicePlay("F100520000_01_010");
MsgDisp("Kazama","Ahh, apparently Hiiragi wants to see the
warehouse of Ojii-chan's shop.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520000_05_010");
MsgDisp("Hiiragi","Yes.
I heard that the Kazama family storehouse
has museum-quality items.");
MsgDisp("主人公","I see, ｛風真＊＊｝ is of an esteemed
family after all.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("F100520000_01_020");
MsgDisp("Kazama","Well yeah.
It's strange that when you guys say it, it
doesn't sound sarcastic.");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,4);
MsgDisp("主人公","Ehh?");
VoicePlay("F100520000_05_020");
MsgDisp("Hiiragi","Why would it sound sarcastic?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("F100520000_01_030");
MsgDisp("Kazama","To put it simply, you guys are pure.
...This is the first time I've come to
know of any similarities between you guys.");
MsgDisp("主人公","Eh?");
ChMotion(5,0);
VoicePlay("F100520000_05_030");
MsgDisp("Hiiragi","Between you and me?");
ChMotion(5,4);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("F100520000_01_040");
MsgDisp("Kazama","Okay, I got it.
I'll ask Ojii-chan.
See you then.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520000_05_040");
MsgDisp("Hiiragi","Thank you very much.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
VoicePlay("F100520000_01_050");
MsgDisp("Kazama","Oh, but we've already donated most of the
things that look good.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100520000_05_050");
MsgDisp("Hiiragi","It's fine.
I just need some inspiration.");
ChMotion(5,0);
ChEye(5,0);
ChMouth(5,4);
VoicePlay("F100520000_05_060");
MsgDisp("Hiiragi","Then, I will go too.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(Inspiration...?
Is ｛柊＊＊＊｝ looking for a hint for his
new play?)");
MsgClose();
ScrFadeOut(0,0);
