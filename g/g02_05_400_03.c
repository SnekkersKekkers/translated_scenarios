MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("G020540003_05_000");
MsgDisp("Hiiragi","Lately, I've been finding conversations 
with my father quite interesting.");
MsgDisp("主人公","Your father?");
ChMotion(5,4);
VoicePlay("G020540003_05_010");
MsgDisp("Hiiragi","Yes, the former troupe leader. He still
talks about theater theory, though.");
MsgDisp("主人公","Hehe, it sounds more like a conversation
between the old and new troupe leaders
than father and son.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020540003_05_020");
MsgDisp("Hiiragi","Yes. But when he's had a drink, we start
talking about things we never did before.");
ChEye(5,2);
ChEyeOpenLevel(5,9);
VoicePlay("G020540003_05_030");
MsgDisp("Hiiragi","About school. 
Whether I've made more friends......
and then if I've done my homework.");
MsgDisp("主人公","Hehe, it's like you're a grade schooler.");
VoicePlay("G020540003_05_040");
MsgDisp("Hiiragi","Yes......");
ChEye(5,0);
ChMotion(5,4);
ChEyeOpenLevel(5,#1);
VoicePlay("G020540003_05_050");
MsgDisp("Hiiragi","Ah, I see. So that's it.");
MsgDisp("主人公","Eh?");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("G020540003_05_060");
MsgDisp("Hiiragi","It means I'm not the only one enjoying
school life now.");
VoicePlay("G020540003_05_070");
MsgDisp("Hiiragi","When I was in grade school, my father
couldn't do any of the typical fatherly
things. So now, he's enjoying it.");
ChEye(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("G020540003_05_080");
MsgDisp("Hiiragi","Yeah......I see.");
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","(Your family is enjoying it too. That's
great, ｛柊＊＊＊｝......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
