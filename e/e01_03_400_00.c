BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yeah, I think it's time to go home now.
Wait, over there, is that......)");
VoicePlay("E010340000_22_000");
MsgDisp("Hikaru?","Because～...... I don't like being called
that!");
VoicePlay("E010340000_03_000");
MsgDisp("Honda?","Do you not like it?
Pika-chan.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,255,0,2,1,#1,#1,0,2,0,30);
MsgDisp("主人公","What's happening with you both?");
ChEye(22,2);
ChMouth(22,5);
ChMotion(22,3,1);
VoicePlay("E010340000_22_010");
MsgDisp("Hikaru","Ah, Mari!
Don't you think Dahon is calling Hikaru
something weird?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("E010340000_03_010");
MsgDisp("Honda","It's not weird.
I think Pika-chan sounds really cool.");
MsgDisp("主人公","(Pika-chan......)");
ChEye(22,2);
ChMouth(22,5);
ChMotion(22,5,1);
VoicePlay("E010340000_22_020");
MsgDisp("Hikaru","That's Dahon's hobby, isn't it!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("E010340000_03_020");
MsgDisp("Honda","Is that so?
I actually like Pika-chan's sense for
nicknaming though?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("E010340000_22_030");
MsgDisp("Hikaru","Huh?
Well, yeah, isn't that right?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010340000_03_030");
MsgDisp("Honda","Yeah, I guess you could say we're similar,
I sympathize with you.");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,1,1);
VoicePlay("E010340000_22_040");
MsgDisp("Hikaru","Even if Dahon sympathizes with me, it's a
bit weird......
What do you think, Mari?");
MsgDisp("主人公","Well...... both are unique I like them
both.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("E010340000_22_050");
MsgDisp("Hikaru","Hmm...... if Mari is okay with it, fine!
Dahon, I'll forgive you for calling me
that for now.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("E010340000_22_060");
MsgDisp("Hikaru","Now then, salut!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(22);
ChPosition(3,0);
MsgDisp("主人公","Uh, yeah, bye bye.");
ChSet(3,3);
VoicePlay("E010340000_03_040");
MsgDisp("Honda","Amazing. Pika-chan listens to you? I'm
counting on you next time Chiru-chan gets
angry with me.");
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("E010340000_03_050");
MsgDisp("Honda","See you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(3);
MsgDisp("主人公","(Chiru-chan...... He's talking about
｛みちる＊｝, right? That seems like it
could be a problem too......)");
MsgClose();
ScrFadeOut(0,0);
